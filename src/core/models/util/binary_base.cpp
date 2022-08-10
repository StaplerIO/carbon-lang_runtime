//
// Created by Jeb Feng on 2022/8/8.
//

#include <cstdlib>
#include "binary_base.h"

BinaryBase::BinaryBase(char *content, unsigned int len) : content(content), len(len)
{
    content = static_cast<char *>(malloc(sizeof(char) * len + 1));
}

char *BinaryBase::getContent() const
{
    return content;
}

unsigned int BinaryBase::getLen() const
{
    return len;
}

void BinaryBase::setContent(char *newContent)
{
    BinaryBase::content = newContent;
}

void BinaryBase::setLen(unsigned int new_len)
{
    len = new_len;
    realloc(content, sizeof(char) * len + 1);
}

BinaryBase::BinaryBase()
{
    content = static_cast<char *>(malloc(sizeof(char) * DEFAULT_SIZE + 1));
    len = DEFAULT_SIZE;
}

BinaryBase::~BinaryBase()
{
    free(content);
}
