#include "../header/Activator.hpp"
#include <fstream>
#include <string>
#include <iostream>

namespace Validator
{
    CodeValidator::CodeValidator()
    {
        std::string textContent;
        std::ifstream inputFile;
        inputFile.open("./VerifyDir/data/serial.txt");

        if ( inputFile.fail())
        {
            std::cerr << "Erreur avec l'ouverture du fichier /VerifyDir/data/serial.txt " << std::endl;
            exit(1);
        }
        inputFile >> code;
        inputFile.close();

        inputFile.open("./VerifyDir/data/attemptsLeft.txt");
        if ( inputFile.fail())
        {
            std::cerr << "Erreur avec l'ouverture du fichier /VerifyDir/data/attemptsLeft.txt " << std::endl;
            exit(1);
        }

        inputFile >> attemptsLeft;
        inputFile.close();

        if ( code == validCode )
        {
            status = "active";
        }
        else 
        {
            status = "not active";
            attemptsLeft--;

            std::ofstream outputFile;
            outputFile.open("./VerifyDir/data/attemptsLeft.txt");
            if ( outputFile.fail())
            {
                std::cerr << "Erreur avec l'ouverture du fichier /VerifyDir/data/attemptsLeft.txt " << std::endl;
                exit(1);
            }

            outputFile << attemptsLeft;
            outputFile.close();
        }
    }

    CodeValidator::~CodeValidator()
    {
        
    }

    void CodeValidator::test()
    {
        std::cout << status << std::endl  << code << std::endl << attemptsLeft << std::endl;
    }

    int CodeValidator::getAttempsLeft()const
    {
        return attemptsLeft;
    }

    std::string CodeValidator::getStatus()const
    {
        return status;
    }
}
