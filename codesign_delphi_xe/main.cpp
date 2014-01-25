//
//  main.cpp
//  codesign_delphi_xe
//
//  Created by Andy Dunkel on 25/01/14.
//  Copyright (c) 2014 Andy Dunkel.
//

#include <iostream>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    //example:
    //codesign -f -s "Common Name" -v "application_name.app" --deep
    
    std::string option = "--deep";
    
    std::string cmd = "/usr/bin/codesign_original ";
    
    for (int i = 1; i < argc; i++) {
        std::string current = argv[i];
        
        //check if parameter has spaces, in that case we put " around the parameter
        std::size_t foundSpace = current.find(" ");
        if (foundSpace!=std::string::npos) {
            current = "\"" + current + "\"";
        }
        
        cmd += current + " ";
    }
    
    //check if deep option is available
    std::size_t found = cmd.find(option);
    if (found==std::string::npos) {
        cmd += " " + option;
    }
    
    // insert code here...
    system(cmd.c_str());
    return 0;
}

