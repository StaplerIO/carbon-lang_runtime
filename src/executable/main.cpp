#include <fstream>
#include <sstream>
#include "models/cli/cli_options.h"
#include "../core/models/util/binary_base.h"
#include "logging.h"
#include "../core/models/package/metadata.h"

void read_file(const std::string& path, BinaryBase *target_obj)
{
    std::ifstream file(path, std::ios::binary);
    if (!file.is_open())
    {
        std::stringstream log_stream;
        log_stream << "File not found: "
                   << path;
        logging::log_fatal(log_stream.str().c_str());
    }

    file.seekg(0, std::ios::end);
    target_obj->setLen(file.tellg());
    file.seekg(0, std::ios::beg);
    file.read(reinterpret_cast<char*>(target_obj->getContent()), target_obj->getLen());
    file.close();
}

int main(int argc, char **argv)
{
    auto formatted_args = CliOptions(argc, argv);
    auto pkg_raw = BinaryBase();
    read_file(formatted_args.getExecutablePath(), &pkg_raw);

    std::stringstream log_stream;
    log_stream << "Package size: "
               << pkg_raw.getLen()
               << " bytes";
    logging::log_trace(log_stream.str().c_str());

    auto metadata = new PackageMetadata(pkg_raw);
    log_stream.str("");
    // std::cout << "Hello, World!" << std::endl;
	return 0;
}
