/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:19:48 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/16 12:16:00 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av){

    if(ac != 4)
    {
        std::cerr << "Usage:" << "<fileName> <s1> <s2>" << std::endl;
        return 1;
    }

    strReply replacer(av[1], av[2], av[3]);
    if(!replacer.processFile())
    {
        std::cerr << "The program can not be successfully!" << std::endl;
        return 1;
    }
    
}


/*  Tester file .sh
    #!/bin/bash

    echo "===== Testing replaced program ====="

    #create a test
    echo "Creating a test file..."
    cat > test_input.txt << EOF
    Hello World!
    This is a test file.
    How do you feel today?
    What is your plan for this weekend?
    Was machst du heute?
    EOF

    echo "Orginal Test:"
    cat test_input.txt
    echo ""

    echo "Test 1: Replaced 'Hello' with 'Merhaba'"
    ./replace test_input.txt "Hello" "Merhaba"
    echo "Result: "
    cat test_input.txt.replace
    echo ""


    echo "Test 2: Replaced 'weekend' with 'today'"
    ./replace test_input.txt "weekend" "today"
    echo "Result: "
    cat test_input.txt.replace
    echo ""


    echo "Test 3: Replaced 'How' with 'Wie'"
    ./replace test_input.txt "How" "Wie"
    echo "Result: "
    cat test_input.txt.replace
    echo ""

    echo "Test 4: Replaced 'do' with 'geht'"
    ./replace test_input.txt "do" "geht"
    echo "Result: "
    cat test_input.txt.replace
    echo ""

    echo "Test 5: Replaced 'you' with 'es'"
    ./replace test_input.txt "you" "es"
    echo "Result: "
    cat test_input.txt.replace
    echo ""

    echo "Test 6: Replaced 'feel' with 'dir'"
    ./replace test_input.txt "feel" "dir"
    echo "Result: "
    cat test_input.txt.replace
    echo ""

*/