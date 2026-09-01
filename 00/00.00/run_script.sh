g++ -std=c++23 00/00.00/hello_world.cpp -o build/hello_world -Wall -Wextra -Wpedantic -fsanitize=undefined,address
./build/hello_world
rm build/hello_world
