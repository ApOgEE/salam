# Nota Apogee

ldd - prints the shared objects (shared libraries) required by each program or shared object specified on the command line.

```
ldd ./bin/ucapkan 
	linux-vdso.so.1 (0x00007fffb1b3c000)
	libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f5cc05dc000)
	/lib64/ld-linux-x86-64.so.2 (0x00007f5cc0808000)
```

