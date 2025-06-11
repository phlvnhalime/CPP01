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

