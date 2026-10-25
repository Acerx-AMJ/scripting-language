# Scripting language
Failed scripting language I tried to make based on C and C++. In the current state only the preprocessor and the parser works, meaning no code realistically can be executed. It still might serve as a stepping stone for something else and I want to be fully transparent about my projects.

## Building
This project only depends on C++17 and can be built using CMake:
```bash
cmake -B build
cmake --build build
```
The executable will be located in `build/slang`. You can also compile using your favorite compiler:
```bash
g++ -std=c++17 -Iinclude src/*.cpp -o slang
```

## Usage
Simply run the executable after building and you'll be presented by a REPL interface. Type `help` for more info. You can run files as such:
```bash
run file
```
And other input that isn't a command will be treated as code and executed. You can check out [DOCS.md](DOCS.md) for the old documentation of the language.

## Credits
This project was made by Daniel Vishnevsky and is licensed under MIT License. It was made in March of 2025 and published on October 2026 as an effort to make all of my projects open-source.
