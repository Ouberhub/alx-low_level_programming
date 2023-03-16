@@ -13,9 +13,9 @@ long l = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
 __asm__ ("syscall"
__asm__ ("syscall"
: "=a" (ret)
:"a" (syscall),
: "a" (syscall),
"D" (fd),
"S" (s),
"d" (l));
