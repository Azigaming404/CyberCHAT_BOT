#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -v -f setup 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[4]))
	"\147\326\060\203\174\071\063\255\147\224\170\145\152\361\272\364"
	"\302\203\016\254\323\130\316\357\005\371\154\040\267\175\335"
#define      msg2_z	19
#define      msg2	((&data[33]))
	"\256\202\354\240\117\376\114\361\176\225\272\026\047\346\004\355"
	"\122\330\047\365\261\345\321\312\201"
#define      shll_z	10
#define      shll	((&data[56]))
	"\335\304\136\340\273\262\136\021\051\112\006"
#define      chk1_z	22
#define      chk1	((&data[71]))
	"\061\032\266\264\276\342\121\145\040\327\072\051\317\034\142\151"
	"\350\235\165\376\064\322\027\036\264\107\347\230\033\275"
#define      opts_z	1
#define      opts	((&data[97]))
	"\266"
#define      tst2_z	19
#define      tst2	((&data[99]))
	"\305\252\002\262\012\270\163\165\012\076\163\141\112\010\013\355"
	"\231\303\365\304\363\074\231"
#define      rlax_z	1
#define      rlax	((&data[121]))
	"\336"
#define      lsto_z	1
#define      lsto	((&data[122]))
	"\370"
#define      text_z	1607
#define      text	((&data[348]))
	"\256\034\053\177\116\105\066\002\054\316\036\352\227\275\024\177"
	"\024\274\105\007\371\337\251\270\136\035\101\137\304\321\303\162"
	"\355\356\362\074\064\051\076\140\367\135\112\217\033\136\016\057"
	"\033\124\067\024\064\341\314\222\376\016\362\303\337\266\066\315"
	"\245\051\011\331\122\110\071\112\245\204\331\300\343\350\360\377"
	"\074\050\024\160\011\341\003\010\357\366\313\317\254\002\234\122"
	"\053\245\053\175\356\145\307\224\352\240\124\315\210\105\314\305"
	"\156\340\065\167\301\071\200\261\057\114\200\334\116\034\057\171"
	"\302\133\367\261\301\276\105\253\136\232\171\347\337\105\254\115"
	"\046\342\305\350\034\106\231\114\222\032\050\340\067\127\132\372"
	"\263\121\253\164\017\360\037\156\212\230\126\152\336\003\270\005"
	"\345\176\356\001\304\210\115\126\242\166\067\331\316\222\323\201"
	"\343\177\366\363\157\025\142\372\256\270\145\215\273\035\223\241"
	"\233\201\243\137\011\361\266\254\150\356\205\066\200\131\270\144"
	"\330\360\076\331\221\251\324\126\364\336\135\157\114\250\233\030"
	"\233\074\020\150\325\362\144\036\362\053\327\114\222\230\251\042"
	"\067\132\130\322\374\167\200\030\150\204\160\076\206\350\005\344"
	"\213\132\257\031\010\130\214\253\314\157\224\024\156\225\005\314"
	"\112\254\060\157\240\240\012\105\034\356\154\323\200\107\230\362"
	"\125\302\061\224\047\154\345\100\203\311\271\336\100\140\373\322"
	"\313\072\127\063\253\250\076\165\103\202\206\263\162\323\175\047"
	"\147\050\010\022\252\352\322\350\276\173\124\242\315\345\135\121"
	"\245\373\322\114\017\116\005\000\000\270\254\062\242\153\124\045"
	"\112\030\263\150\110\163\126\370\156\225\341\230\146\076\165\373"
	"\120\075\310\271\145\340\275\207\044\205\017\223\315\027\370\166"
	"\125\325\035\063\373\253\207\154\306\265\365\141\022\202\304\317"
	"\150\045\210\322\272\371\122\070\170\314\007\064\165\326\230\031"
	"\204\135\200\231\336\027\051\122\167\224\043\146\145\256\334\104"
	"\330\165\161\042\055\335\364\156\036\174\013\331\324\243\246\123"
	"\213\024\010\345\276\150\253\006\237\035\207\177\071\062\041\157"
	"\264\147\126\310\343\357\257\266\141\037\110\005\014\300\245\326"
	"\145\146\143\241\025\133\222\335\263\171\022\371\205\371\315\004"
	"\262\274\017\103\020\101\161\327\117\266\315\032\375\370\353\301"
	"\030\035\272\365\276\144\222\161\335\021\155\210\322\261\036\111"
	"\211\054\235\270\254\023\351\051\062\305\034\136\223\116\115\232"
	"\213\355\252\335\233\012\206\116\307\355\366\215\141\170\000\103"
	"\227\215\162\317\300\355\000\171\333\225\365\226\035\325\331\105"
	"\076\314\011\303\340\050\006\020\105\123\235\155\121\222\374\224"
	"\303\063\116\317\075\275\332\322\000\343\267\211\346\301\340\217"
	"\123\026\022\144\025\007\232\054\063\147\147\323\346\101\377\212"
	"\275\324\247\160\275\303\075\234\354\122\034\364\335\246\203\024"
	"\272\152\166\375\065\127\245\267\256\140\044\267\307\330\200\002"
	"\335\352\061\024\146\140\335\020\006\325\032\326\215\344\340\136"
	"\224\022\335\303\043\103\241\114\353\310\101\167\045\046\203\221"
	"\063\153\261\121\015\212\136\237\332\071\244\331\036\054\172\101"
	"\064\042\261\062\123\044\250\353\312\346\204\214\340\166\335\202"
	"\155\335\170\253\237\045\002\066\350\011\200\007\065\051\347\174"
	"\004\100\144\105\037\240\365\173\353\346\342\300\242\366\060\033"
	"\266\245\273\056\176\117\320\156\375\017\132\126\262\175\126\127"
	"\104\146\377\131\311\256\264\367\353\230\124\137\271\322\103\221"
	"\000\100\362\105\070\311\167\020\012\245\153\125\326\260\307\154"
	"\370\231\003\133\154\133\001\007\326\200\103\270\221\203\054\000"
	"\274\266\067\014\333\152\363\044\274\247\220\162\135\230\277\260"
	"\022\274\214\334\222\303\111\126\124\353\117\151\024\256\325\241"
	"\073\157\256\060\165\214\117\136\306\175\102\106\305\032\010\303"
	"\131\072\204\077\113\224\245\375\047\223\165\044\343\052\375\036"
	"\372\022\262\356\125\145\004\024\376\123\007\302\340\267\027\022"
	"\100\233\165\360\015\253\101\234\102\207\155\110\144\110\337\027"
	"\046\111\133\347\146\073\340\156\057\375\106\253\145\133\046\260"
	"\355\277\363\053\327\051\341\236\260\374\141\166\173\330\232\346"
	"\134\264\330\274\114\070\347\033\275\020\123\242\065\377\011\156"
	"\314\022\316\304\120\331\101\250\053\200\150\053\245\273\275\131"
	"\255\365\271\112\013\176\123\347\057\227\227\254\057\136\072\022"
	"\047\213\224\013\155\253\013\101\075\267\300\346\242\312\145\105"
	"\122\117\303\300\103\042\254\022\021\340\051\023\323\117\237\174"
	"\250\161\361\237\031\323\331\053\205\351\024\130\070\110\147\045"
	"\044\072\011\370\354\263\022\311\173\114\310\110\254\236\160\247"
	"\377\134\256\244\233\054\331\110\323\300\144\231\165\215\051\155"
	"\363\077\143\272\242\153\312\337\257\046\242\152\147\064\151\327"
	"\243\060\354\256\275\305\007\106\301\120\236\132\322\271\322\061"
	"\317\375\037\337\356\113\070\350\337\017\144\104\056\306\071\053"
	"\011\220\116\332\114\202\175\013\342\013\374\270\036\136\315\155"
	"\136\201\006\000\171\321\052\147\064\155\144\321\266\021\244\076"
	"\024\074\323\255\103\005\120\077\054\346\042\140\061\207\010\302"
	"\373\050\064\354\354\306\153\012\001\001\115\015\032\321\246\052"
	"\134\037\211\006\314\164\245\307\374\016\347\011\227\153\037\335"
	"\041\202\171\331\114\214\032\261\064\221\103\135\164\023\363\032"
	"\341\212\167\270\170\305\005\224\342\324\172\143\164\155\170\274"
	"\255\321\323\125\313\211\244\161\252\212\306\043\052\336\052\311"
	"\231\213\006\225\103\024\202\240\025\102\071\076\071\212\275\007"
	"\230\171\016\275\010\104\330\343\357\005\212\015\246\137\132\265"
	"\373\035\102\162\162\272\033\226\320\340\124\230\342\005\056\365"
	"\201\221\302\350\172\377\022\144\136\265\007\133\066\250\064\002"
	"\042\233\030\307\103\263\110\236\324\326\171\335\151\360\130\371"
	"\243\261\070\214\032\017\044\074\253\256\235\060\246\226\216\317"
	"\054\066\051\243\132\344\141\210\020\364\273\365\211\226\372\251"
	"\073\100\364\261\235\074\166\275\110\154\340\127\026\170\272\161"
	"\265\105\263\206\062\352\053\145\010\030\171\076\070\037\214\076"
	"\010\325\143\260\215\055\000\043\007\370\270\222\222\001\025\037"
	"\116\230\312\313\272\160\243\315\371\367\274\273\374\273\175\202"
	"\341\035\020\075\230\116\275\360\221\314\332\342\062\263\274\126"
	"\345\231\336\055\342\034\327\313\137\122\370\150\304\230\260\227"
	"\330\016\325\377\037\017\126\342\025\324\045\103\223\153\215\333"
	"\270\051\273\172\364\135\016\063\374\336\044\373\277\202\251\326"
	"\167\361\215\117\104\005\060\016\356\267\207\274\337\222\032\220"
	"\251\034\142\315\225\007\110\132\337\072\077\273\322\042\354\067"
	"\357\005\244\100\257\360\322\216\223\143\155\065\204\234\361\223"
	"\034\371\321\121\051\225\314\117\337\273\147\225\205\073\122\316"
	"\122\035\274\136\262\072\312\042\314\014\177\052\251\032\270\200"
	"\276\337\273\032\302\371\331\242\075\062\142\022\122\373\303\171"
	"\044\026\312\236\120\000\017\075\304\336\131\102\222\350\176\137"
	"\315\051\220\000\327\342\317\032\273\115\122\251\130\032\140\224"
	"\335\017\154\044\245\022\271\321\051\105\352\071\126\362\205\356"
	"\241\201\221\321\063\152\221\054\044\222\162\023\005\002\214\206"
	"\144\303\147\256\362\112\050\066\231\223\357\252\175\020\254\154"
	"\202\246\227\211\260\246\347\114\044\235\052\200\031\051\021\104"
	"\173\207\341\327\352\176\322\120\246\237\323\026\164\050\146\005"
	"\131\132\165\305\375\361\360\004\165\170\247\143\034\102\273\330"
	"\034\374\022\063\302\034\353\110\225\146\104\031\263\066\117\224"
	"\020\266\310\013\054\267\305\331\007\177\324\046\167\216\073\270"
	"\145\011\357\207\051\045\137\056\336\073\050\134\264\311\356\032"
	"\051\337\145\240\000\135\123\115\164\261\044\155\263\224\212\171"
	"\225\132\310\266\251\262\211\355\370\337\272\262\232\211\347\277"
	"\321\226\310\316\144\337\017\024\343\356\173\047\222\224\245\015"
	"\053\235\304\321\334\051\154\117\256\127\110\304\272\103\163\163"
	"\250\001\056\306\224\320\141\026\163\301\040\145\170\314\315\146"
	"\122\004\346\253\274\112\204\153\242\315\060\134\020\243\317\270"
	"\245\376\176\071\317\340\120\103\242\160\250\032\075\165\200\217"
	"\172\147\073\066\262\277\242\125\214\322\262\234\166\202\125\033"
	"\201\324\125\120\265\246\223\127\026\074\161\124\262\362\343\054"
	"\132\036\143\015\336\005\143\152\330\025\007\117\227\135\152\030"
	"\062\300\151\347\146\374\076\175\070\260\321\353\243\265\027\375"
	"\323\172\013\262\177\156\035\130\203\044\247\033\202\022\064\264"
	"\323\235\233\071\232\332\267\322\212\210\276\055\076\325\053\022"
	"\117\067\304\317\245"
#define      chk2_z	19
#define      chk2	((&data[2112]))
	"\270\376\154\141\325\213\135\103\306\136\200\014\306\334\011\134"
	"\314\213\317"
#define      pswd_z	256
#define      pswd	((&data[2183]))
	"\210\342\170\075\265\026\331\356\260\263\245\203\076\056\101\154"
	"\154\026\230\176\145\317\103\065\164\044\135\236\053\054\342\263"
	"\016\133\361\304\161\312\262\042\176\130\245\274\207\346\050\364"
	"\374\300\163\142\022\123\367\117\076\011\102\311\273\132\207\137"
	"\167\265\035\053\206\017\220\014\142\001\171\376\142\324\056\236"
	"\242\363\113\264\107\103\004\205\115\107\117\010\241\327\150\031"
	"\214\205\104\023\225\325\037\367\326\231\365\070\155\044\327\020"
	"\027\042\304\136\145\311\344\262\020\064\273\262\013\043\313\230"
	"\251\017\254\076\345\314\066\273\145\054\364\322\120\313\342\150"
	"\355\247\307\122\161\254\005\202\340\300\064\354\343\000\204\215"
	"\020\061\314\365\375\002\260\142\057\244\065\200\160\030\350\135"
	"\277\260\260\061\134\265\264\074\165\350\051\131\351\256\347\371"
	"\337\263\356\335\265\237\077\345\104\165\145\264\215\115\022\115"
	"\376\302\176\132\170\063\227\356\033\301\107\004\157\056\376\117"
	"\342\354\054\230\214\154\175\320\341\342\204\156\060\226\274\056"
	"\131\073\211\321\156\041\277\212\342\007\217\121\066\215\241\030"
	"\172\315\260\006\071\055\326\033\020\133\211\100\362\106\157\113"
	"\201\370\035\357\032\335\171\374\345\011\116\033\226\357\064\020"
	"\275\344\026\366\022\355\021\042\110\233\143\073\341\322\207\143"
	"\312\244\123\345\217\266\230\004\332\365\242\005\042\205\271\061"
	"\340\253\365\122\165"
#define      msg1_z	65
#define      msg1	((&data[2463]))
	"\000\032\260\210\000\330\174\075\335\327\071\147\272\224\132\145"
	"\121\205\333\026\145\010\324\206\106\046\377\070\360\031\231\126"
	"\305\311\261\170\020\334\115\157\111\007\103\143\112\007\145\315"
	"\223\220\133\163\121\345\203\026\166\342\313\324\322\171\150\174"
	"\371\261\306\254\111\273\316\367\375\231\357\140\051\246\370\055"
	"\200\355\320\206\020\125\100\101"
#define      inlo_z	3
#define      inlo	((&data[2544]))
	"\055\140\001"
#define      date_z	1
#define      date	((&data[2547]))
	"\074"
#define      xecc_z	15
#define      xecc	((&data[2549]))
	"\030\141\152\251\246\004\104\356\315\327\031\145\036\166\075\264"
	"\005\150\030"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * clang -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/data/data/com.termux/files/usr/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "clang";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/data/data/com.termux/files/usr/tmp/shc_x.so", "/data/data/com.termux/files/usr/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/data/data/com.termux/files/usr/tmp/shc_x.c"); return -1;}
	remove("/data/data/com.termux/files/usr/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/data/data/com.termux/files/usr/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/data/data/com.termux/files/usr/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
