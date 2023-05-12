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
