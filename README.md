# Aluminum
A simple language and compiler

# The Goal

Many programming languages are confusing to learn and are especially difficult for those who have less experience programming. The goal of this project is to make a language that is more intuitive to learn and use than standard programming languages, such as C++, Java, and Rust.

I’ve seen many friends, who come from a math background, being extremely confused by the syntax and flow of programming languages. This creates a large barrier of entry that I want to attempt to address with this project. Thus, many syntactical choices for *Aluminum* will come from the way mathematical proofs are written.

Additionally, *…I am enrolled in CMSC838E* and wanted to do a final project which let’s me explore current technologies and libraries for creating new programming languages and compilers. That being said, I’ve been very interested in LLVM and creating a compiler using the LLVM backend, so this was a great excuse to do so.

---

# Tools

To build this compiler, the code is written in C++, and I primarily used two tools: **ANTLR4** and **LLVM**.

### ANTLR4

ANTLR (or ANother Tool for Language Recognition) is a powerful parser generator for reading, processing, executing, or translating structured text or binary files. It's widely used to build languages, tools, and frameworks. From a grammar, ANTLR generates a parser that can build and walk parse trees.

I will be using this tool for the front end. After defining a CFG for the language, I will use ANTLR4 to traverse the parse tree, and translate the *Aluminum* code into LLVM IR.

### LLVM

LLVM, used in Rust, CLang, and many other languages, is a powerful compiler infrastructure, which can take LLVM IR code, and compile it to virtually any architecture. LLVM can also be used to optimize the code.

### C++

LLVM is based in C/C++ and ANTLR4 has a C++ library, so this was the natural choice in which language to use

---

# Building *Aluminum*

### Getting the Dependencies

Aluminum is built using two tools: ANTLR4 and LLVM. Both of these tools are added as git submodules to the project. Downloading these can be done done in two ways: 

1. Cloning the submodules during the initial repository clone:
`git clone --recurse-submodules https://github.com/amovsesyan/Aluminum.git`****
2. Cloning the submodules after the initial repository clone:
`git clone https://github.com/amovsesyan/Aluminum.git`
`git submodule init`
`git submodule update`

### Building the Dependencies

Once all the dependencies are downloaded, we need to install them.

The CMake file expects these dependencies to be installed in the `external_library_builds` directory. I have supplied a set up script, `build_dep.sh` which should take care of all the installations.

It’s important to note, however, that LLVM takes a very long time to build - on my desktop it took ~30-40 minutes, and on my laptop it took over an hour.

If you have LLVM already installed, it would be easier to update the CMakeLists.txt to use the already installed version.

### Using Prebuilt Dependencies

LLVM takes a very long time to install, but we can update the CMakeLists.txt  to use an already installed version. 

This can be done by changing the `llvm-lib` variable inside CMakeLists.txt.

### Building Aluminum

Once all the dependencies are built, there are just a few steps left to build *Aluminum*.

1. Navigate to the project’s root directory
2. Make a build directory:
`mkdir build`
3. Navigate into the build directory:
`cd build`
4. Run CMake:
`cmake ..`
5. Run Make:
`make -j`

Now, you should see the `aluminum` executable!

---

# Compiling *Aluminum* Programs

*Aluminum* is built on top of LLVM, thus it parses the source code and generates LLVM IR code. This means that it is a two step process to compiling the code.

1. Translating the source code to LLVM IR Code:
`./aluminum my_own_aluminum_program.al`
The `aluminum` executable requires exactly one argument: the path to the source code, and it creates one file: `al_code_gen.ll` 
2. Using LLVM `lli` to run the IR Code:
`lli al_code_gen.ll`
The `lli` executable is available within the *bin* library inside the LLVM install location

---

# Writing an *Aluminum* Program

### Variable Types

Variables in *Aluminum* have 3 types:

1. Integers, with keyword `int`
2. Floating point numbers, with keyword `float`
3. Boolean values, with keyword `bool`

Currently, *Aluminum* **does not** support casting, implicitly or explicitly, thus it is important to write literals the correct way.

1. Integer literals are signed and only contain digits and potentially a negative sign. Here are some examples:
    1. `36894`
    2. `109783`
    3. `-32487`
2. Float literals are signed and must contain a decimal point. There must be at least 1 digit before and after the decimal point. Here are some examples:
    1. `-123.5`
    2. `30.0`
    3. `0.05`
3. Boolean literals are defined only as `true` or `false`

### Defining Variables

*Aluminum* is meant to be easy to learn for maths students and professionals. Thus, defining a variable is done in a similar way to mathematical proofs, with the `take` keyword.

```bash
take int x;
take float y;
take bool z;
```

While declaring variables, you can also assign them a value:

```bash
take int x = 3;
take float y = 9.03;
take bool z = true;
```

If no value is specified during declaration, *Aluminum* will assign them a default value of 0 (or false if it’s a boolean type).

### Mutating Variables

Many new computer scientists often struggle with the idea of mutating variables, thus in *Aluminum*, one must be explicit with this, via the use of the `set` keyword.

Assuming we have defined the variables we can mutate them:

```bash
set x = 1;
set x = x + 1;
set y = 0.0;
```

### Arithmetic Operations

*Aluminum* supports the 4 basic arithmetic operations: multiple, divide, add, and subtract. However, since there is no casting in the language (*…yet*), the arithmetic operations can only be applied to two values of the same type. In addition to these operations, *Aluminum,* can also use parenthesis to modify the order of operations. 

Let’s take a look at some example:

```bash
take int x = 3;
take int z;
set z = 3 * x;
set x = z / 3 + 78 * 2;
take int q = (z - 3) * 4;
```

### Comparing Values

*Aluminum* supports the following comparative operations, which return a boolean value:

1. `=`: equal
2. `~=`: not equal
3. `<`: less than
4. `<=`: less than or equal to
5. `>`: greater than
6. `>=`: greater than or equal to

Similar to arithmetic operations, when comparing two values or expressions, they must be of the same type.

### Conditional Expressions

*Aluminum* uses conditional expressions in the same syntax to C and Java.

```bash
if(e1) {
	do_something
} else if (e2) {
	do_something_else
} else {
	do_something_else_else
}
```

It is important to note that the expressions `e1` and `e2` must evaluate to boolean values. Also, the `else if` and `else` blocks are not required to be written alongside an `if` block: an `if` block can exists on its own.

### Defining Functions

Again taking inspiration from mathematical syntax, *Aluminum* uses the keywords `def` and `func` to when defining functions. Additionally, to define argument variables, *Aluminum* uses the same syntax as C and Java. To define the return type of a function (if any), *Aluminum* uses a Python-style syntax. Let’s take a look at some examples:

```bash
def func double_int(int x) -> int {
	return x * 2;
}

def func some_void() {
	take x = 3;
} 
```

### Calling Functions

Function calls are done in the same way as most standard programming languages. Using the functions shown above, let’s look at an example:

```bash
def func main() {
	take int x = 2;
	set x = double_int(x);
	take int y = double(3);
}
```

### Other Notes

- While whitespaces are ignored, *Aluminum* makes use of the `;` character to signify the end of a line (or statement).
- Similar to many other programming languages, *Aluminum* uses curly braces to define a function’s scope

---

# The Development Process

The process of developing *Aluminum* can be split into a few chunks.

### Creating the CFD

This was probably the easiest part of *Aluminum* - developing the language’s grammar wasn’t hard, as ANTLR4 provides the grammars of Java and C as examples. I should note, however, that the grammar was continuously updated as I ran into blocks in the other parts of development.

### Linking ANTLR4 and LLVM to *Aluminum*

This was probably the most difficult part to set up. While people more experienced with C++ and CMake would have an easier time at setting up all the dependencies, I found that linking the external projects within the CMake extremely tedious, and it took many compilation and linking errors before working. While this doesn’t seem difficult in retrospect, it unfortunately took 80% of the time I had dedicated to the project.

### Generating the LLVM IR Code

Once I was able to link both ANTLR4 and LLVM, I mostly followed LLVM’s [Kaleidoscope](https://llvm.org/docs/tutorial/) tutorial. However there are some differences that I needed to address.

To parse tree of the source code generated by ANTLR4, I created a *visitor* class, which implemented LLVM code generation functions.

In terms of development this means that:

- There exists a *visit* function for every grammar rule which shall generate the necessary code for the operation and return the produced value
- Every one of these *visit* functions will return some std::any value
- After we’ve visited every node in the parse tree, the LLVM IR code will be printed into a new file

This seems fairly similar to how LLVM Kaleidoscope does it, but what are the differences?

- LLVM toy language if a functional language and variable scopes are handled somewhat differently from how they’re handled in a standard language
- Kaleidoscope is not bound to the constraints of ANTLR4, thus it’s flow is much more in line with LLVM constructs
    - An example of this is every `codegen` function in Kaleidoscope returns an `llvm::Value*` type. However, with using ANTLR4, every one of the *visit* functions (which is comparable to the `codegen` functions) must return a `std::any` type, meaning that there is more overhead to getting child values
- *Aluminum* provides three variable types, while LLVM’s toy language only supports float types. This means that all expressions in *Aluminum* must be type checked to assert that everything works as expected

After all the *visit* functions were implemented to generate LLVM IR Code, we could see that the entire *Aluminum* source code program is translated into LLVM IR Code. We can run the IR code directly, using LLVM’s `lli` executable, or we can compile it into a binary executable and run that!

### Creating a Print Function

After I finished the IR code generation, I was really excited, but I very quickly realized that it’s not very useful to just run a program and get nothing out of it. Thus, I also set on implementing a print function to be able to see visual proof that the compiler works as expected. 

It turns out however, that the documentation on this is very sparse and not too straight forward, but I was able to finally implement the `print_int` function which will print a single integer. 

While this isn’t exactly a ground-breaking thing, I decided to include this in the report, as it was a source of a few headaches.

---

# Results and Code Generation Examples

### Aluminum Code

```bash
def func times_two(int x) -> int {
    print_int(x);
    return x * 2;
}

def func main() {
    take int two_times_3 = times_two(3);
    print_int(two_times_3);
}
```

### LLVM IR Code

```bash
; ModuleID = 'my compiler'
source_filename = "my compiler"

@int_print_str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

declare i32 @printf(...)

define i32 @times_two(i32 %x) {
entry:
  %x1 = alloca i32, align 4
  store i32 %x, ptr %x1, align 4
  %x2 = load i32, ptr %x1, align 4
  %0 = call i32 (...) @printf(ptr @int_print_str, i32 %x2)
  %x3 = load i32, ptr %x1, align 4
  %multmp = mul i32 %x3, 2
  ret i32 %multmp
}

define void @main() {
entry:
  %calltmp = call i32 @times_two(i32 3)
  %two_times_3 = alloca i32, align 4
  store i32 %calltmp, ptr %two_times_3, align 4
  %two_times_31 = load i32, ptr %two_times_3, align 4
  %0 = call i32 (...) @printf(ptr @int_print_str, i32 %two_times_31)
  ret void
}
```

---

```bash
def func main() {
    take int x = 5;
    if(x < 5) {
        print_int(x);
    } else if(x = 5) {
        set x = 2 * x;
    } else {
        set x = x * 3 - 9;
    }
    print_int(x);
}
```

```bash
; ModuleID = 'my compiler'
source_filename = "my compiler"

@int_print_str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

declare i32 @printf(...)

define void @main() {
entry:
  %x = alloca i32, align 4
  store i32 5, ptr %x, align 4
  %x1 = load i32, ptr %x, align 4
  %cmp-int-lt = icmp slt i32 %x1, 5
  br i1 %cmp-int-lt, label %then, label %else

then:                                             ; preds = %entry
  %x2 = load i32, ptr %x, align 4
  %0 = call i32 (...) @printf(ptr @int_print_str, i32 %x2)
  br label %ifcont9

else:                                             ; preds = %entry
  %x3 = load i32, ptr %x, align 4
  %cmp-int-eq = icmp eq i32 %x3, 5
  br i1 %cmp-int-eq, label %then4, label %else6

then4:                                            ; preds = %else
  %x5 = load i32, ptr %x, align 4
  %multmp = mul i32 2, %x5
  store i32 %multmp, ptr %x, align 4
  br label %ifcont

else6:                                            ; preds = %else
  %x7 = load i32, ptr %x, align 4
  %multmp8 = mul i32 %x7, 3
  %subtmp = sub i32 %multmp8, 9
  store i32 %subtmp, ptr %x, align 4
  br label %ifcont

ifcont:                                           ; preds = %else6, %then4
  br label %ifcont9

ifcont9:                                          ; preds = %ifcont, %then
  %x10 = load i32, ptr %x, align 4
  %1 = call i32 (...) @printf(ptr @int_print_str, i32 %x10)
  ret void
}
```

---

# Future Work

While *Aluminum* is able to as much as a classic calculator, I did want to implement much more functionality. Unfortunately, with time constraints I had to develop this, many features were left out. Here are some basic features I hope to add.

### Optimization

One of the greatest benefits of LLVM is that they provide many optimizers for the IR Code. While I didn’t have time to experiment with them in this project, they will be very useful to implement in order to improve the language’s performance.

### Loops

I initially set out to implement a simple while loop. While I didn’t have time to implement this feature, I consider that this will be an imperative addition to the language.

### Variable Casting

Another imperative feature that needs to be implemented is variable casting. Since you cannot operate on variables of different types, the lack of casting extremely inhibits on the potential power of the language.

### Variable References

One of the best parts of C++ is the ability to explicitly share pointers to variables, meaning that one must be explicit with giving access to edit a variable. On the other hand however, one of the benefits of Java is not needing to worry about the delicate and annoying attentions to detail that using pointers requires. I would like to have variable references that is somewhat in between the two but yet is intuitive to use.

I would like to implement variable references to have 3 types of relationships:

1. Owner 
    1. The owner can do anything they want with their variable 
    2. Only 1 Owner exists
2. Editor 
    1. The editor can change the value of the variable but cannot delete it
3. Viewer 
    1. The viewer can only view the value of the variable and access any non-mutating methods

### A Better Print Function

While the currently implemented `print_int` function does it’s job at printing integer values, the language needs a more powerful function that can print any value combined with any string literal, similar to C’s `printf`.

### Custom Types

Another feature I would like *Aluminum* to have is custom types (or classes), so that the user can use the language in any way they see fit. This, similar to variable references however, is a very ambitious goal.
