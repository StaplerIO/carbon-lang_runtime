//
// Created by Jeb Feng on 2022/8/8.
//

#ifndef CARBON_LANG_RUNTIME_BINARY_BASE_H
#define CARBON_LANG_RUNTIME_BINARY_BASE_H

#define DEFAULT_SIZE 64

class BinaryBase
{
public:
    BinaryBase(char *content, unsigned int len);

    BinaryBase();

    ~BinaryBase();

    char *getContent() const;

    unsigned int getLen() const;

    void setContent(char *newContent);

    void setLen(unsigned int len);

private:
    char *content;
    unsigned int len;
};

#endif //CARBON_LANG_RUNTIME_BINARY_BASE_H
