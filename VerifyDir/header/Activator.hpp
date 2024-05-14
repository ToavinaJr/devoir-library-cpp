#pragma once
#include <string>

namespace Validator
{
    class CodeValidator
    {
        public:
            CodeValidator();
            ~CodeValidator();

            void test();
            
            int getAttempsLeft()const;
            std::string getStatus()const;

        private:
            const std::string validCode {"123.456.789"};
            std::string status;
            std::string code;
            int attemptsLeft;
    };
}