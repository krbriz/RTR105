1  echo $0
   man uname  #atrod
   who
   whoami  - kas ir lietotājs
   pwd - kādā direktorijā es esmu
   ls - saraksts
   man ls - manuāls saraksts
   cd ..
   ls -lt - saraksts ar laika info
   cd . - mape
   cd ~
   cd /bin/
   cd ../var/
   history
   tree - saraksts ar failiem
   kristaps brīze is inviting you to a scheduled Zoom meeting.
   rm - dzēšana
   rm te*t*.txt - dzēšana ar maskām
   echo - atbalss
   "Hello World" \n Hello World" jaunā rindiņā
   echo "Hello world" > text.txt ierakstīt failā
   cat text.txt redzēt tekstu
   hexdump -C text.txt heksidecimāls info
   echo "7890" >> text.txt fails tiek papildināts
   nano un faila nosaukums - teksta rediģēšana
   Ctrl R
   Chmod 444 - tiesību nomaiņa
   sh - shell
   rmdir - direktoriju dzēšana   
   rm - failu un direktoriju dzēšana
   echo $PATH - izpildāmais fails
   history - darbību vēsture
   

   6 pwd --help - palīgs
   7 ls --help - palīgs
  16 touch test1.txt - izmainīt failu
  18 touch -t 202109140000 start
  20 touch -t 202109140001 readme.txt
  22 touch -t 202109142359 stop
  24 history - vēsture
  25 history | grep touch - vēsture
  27 tree - redzams, kā izkārtojušies faili
  32 find . -newer start
  33 find . -newer start \! -newer stop
  35 apt-get install tree
  43 cp /root/readme.txt /tmp/readme_copy.txt - kopēt failu
  44 pwd
  50 mv ../tmp/readme_copy.txt ./readme_copy_moved.txt
  54 mv readme.txt readme_original.txt
  56 rm nexteday
  57 ls -lt
  58 touch text2.txt - izmainīt tekstu
  60 rm te*t*.txt - aizvietot tekstu?
 100 nano text.txt
 101 ls -lt
 102 cat text_cits.txt
 103 cat text_cits_cits.txt
 104 nano
 105 lslt
106 ls -lt
 107 find . -newer start \! -newer stop
 108 ls -lt
 109 rm text*.*
 110 ls -lt
 111 rm *text*.*
 112 ls -lt
 113 nano test.txt
 114 ls -lt
 115 cat test.txt
 116 chmod 444 test.txt
 117 ls -lt test*.txt
 118 ls -lt *.txt
 119 ls -lt test.txt
 120 echo fvkjfksdlflsgkr >> test.txt
 121 ls -lt test.txt
 122 cat test.txt
 123 ls -lt test.txt
 124 nano test.txt
 125 ls -lt
 126 whoami
 127 ls -lt
 128 ls -lt test.txt
 129 chmod 744 a.out
 130 ls -lt test.txt
 131 ls -lt
132 ls
 133 ls -lt
 134 nano script.sh
 135 echo $0
 136 whereis sh
 137 ls -lt /bin/sh
 138 ls -lt /bin/*sh*
 139 nano script.sh
 140 ls -lt
 141 cat script.sh
 142 ls
 143 script.sh
 144 ./script.sh
 145 chmod 744 script.sh
 146 ls -lt
 147 script.sh
 148 ./script.sh
 149 ls -lt
 150 cd ABC/
 151 ls -lt
 152 cat test.txt
 153 cd ..
 154 nano script.sh
 155 ls -lt
 156 rmdir ABC/
 157 rmdir --help
 158 rm ABC
 159 rm -r ABC
From Tatjana Solovjova to Everyone:  09:54 AM
160 ls -lt
 161 nano script.sh
 162 script.sh
 163 ls
 164 ls -lt /bin/ls
 165 ls -lt /bin/
 166 ls
 167 echo $PATH
 168 ls
 169 script.sh
 170 ls
 171 history



0 gcc
   1 nano first_code.c
   2 ls -lt
   3 cat first_code.c
   4 gcc --help
   5 ls -lt
   6 gcc -Wall -save-temps first_code.c -o first.out
   7 ls -lt
   8 ./first.out
   9 cat first_code.
  10 cat first_code.c
  11 nano first_code.c
  12 ls -lt
  13 cat first_code.c
  14 gcc -Wall -save-temps first_code.c -o first.out
  15 nano first_code.c
  16 ls -lt
  17 cat first_code.c
  18 gcc -Wall -save-temps first_code.c -o first.out
  19 nano first_code.c
  20 ls -lt
  21 cat first_code.c
  22 gcc -Wall -save-temps first_code.c -o first.out
  23 ls -lt
  24 echo $?
25 first.out
  26 echo $?
  27 nano first_code.c
  28 gcc -Wall -save-temps first_code.c -o first.out
  29 ls -lt
  30 ./first.out
  31 echo $?
  32 nano first_code.c
  33 ls -lt
  34 ./first.out
  35 nano first_code.c
  36 ls -lt
  37 gcc -Wall -save-temps first_code.c -o first.out
  38 ls -lt
  39 nano first_code.c
  40 ls -lt
  41 gcc -Wall -save-temps first_code.c -o first.out
  42 ls -lt
  43 nano first_code.c
  44 ls -lt
  45 gcc -Wall -save-temps first_code.c -o first.out
  46 ls -lt
  47 nano first_code.c
  48 ls -lt
  49 gcc -Wall -save-temps first_code.c -o first.out
  50 ls -lt
  51 ./first.out
  52 ls -lt
  53 cat first_code.c
54 cat first_code.i
  55 cat first_code.s
  56 cat first_code.o
  57 cat first_code.c
  58 cat first_code.i
  59 cat first_code.s
  60 cat first_code.o
  61 hexdump -C first_code.o
  62 ls -lt
  63 cat first.out
  64 hexdump -C first.out
  65 ls -lt
  66 rm *.o *.s *.i
From Tatjana Solovjova to Everyone:  09:48 AM
79 gcc -Wall first_code.c
  80 ./a.out
  81 echo $?
  82 nano first_code.c
  83 gcc first_code.c
  84 nano test.sh
  85 ls -lt
  86 chmod 744 test.sh
  87 ./test.sh
  88 nano first_code.c
  89 ./test.sh
  90 nano
  91 ls -lt
  92 gcc -save-temps first_code.c -o first.out
  93 ls -lt
  94 nano first_code.s
  95 history
