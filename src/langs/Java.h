//
// Created by danielh on 08-07-24.
//

#ifndef GETTISXX_JAVA_H
#define GETTISXX_JAVA_H

#include "../CompiledLanguage.h"

class Java : public CompiledLanguage{
public:
    int compile(string directoryName) override;
    string execute(string input) override;
};


#endif //GETTISXX_JAVA_H