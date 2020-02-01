{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
\
int main()\
\{\
    int c[4];\
    int i;\
    for(i=0;i<=4;i++)\
    \{\
        printf("Enter ascii value");\
        scanf("%d",&c[i]);\
    \}\
    printf("%c%c%c%c%c",c[0],c[1],c[2],c[3],c[4]);\
    \
\
    return 0;\
\}}