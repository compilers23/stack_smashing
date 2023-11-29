when you call a function with "call" (in assembly), the return address gets pushed to stack.
return address is the address of the next instruction in memory.
so when you enter the function, the top of the stack contains that return address.

then, however, different things happen.

see [here](https://github.com/compilers23/BBS/blob/main/notes/languages/functions/notes)

and [here](https://github.com/compilers23/BBS/blob/main/notes/languages/functions/notes64)


if you compile this program now by typing "make", and execute it

```
./test
```

it will print

```
1
```

because the function named "function" returns to the point in memory
where the hexadecimal instructions for  "x = 1" reside.

change the function "function" in a way
that the return address of the function contains address of "printf",
instead of the address of "x = 1" which it contains.
(c allows such nasty things)
(i know you may not know c well, that is not necessary, just tinker)
then by compiling and running the program you would get

```
0
```

and therefore the task will be completed.

have fun.

p. s.
you can open some file and write there "i gave up", you'll get the same score.
i just want to give you opportunity to have fun.
