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
