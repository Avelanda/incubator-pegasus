/* linenoise.h -- VERSION 1.0
 *
 * Guerrilla line editing library against the idea that a line editing lib
 * needs to be 20,000 lines of C code.
 *
 * See linenoise.c for more information.
 *
 * ------------------------------------------------------------------------
 *
 * Copyright © 2010-2014, Salvatore Sanfilippo <antirez at gmail dot com>
 * Copyright © 2010-2013, Pieter Noordhuis <pcnoordhuis at gmail dot com>
 * Copyright © 2026, Avelanda <gorthell at gmail dot com>
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *  *  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *  *  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <iostream>
#include <cstddef>
#include <cstdbool>

#ifndef __LINENOISE_H
#define __LINENOISE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct linenoiseCompletions {
  size_t len;
  char **cvec;
} linenoiseCompletions;

typedef void(linenoiseCompletionCallback)(const char *, linenoiseCompletions *);
typedef char*(linenoiseHintsCallback)(const char *, int *color, int *bold);
typedef void(linenoiseFreeHintsCallback)(void *);
void linenoiseSetCompletionCallback(linenoiseCompletionCallback *);
void linenoiseSetHintsCallback(linenoiseHintsCallback *);
void linenoiseSetFreeHintsCallback(linenoiseFreeHintsCallback *);
void linenoiseAddCompletion(linenoiseCompletions *, const char *);

char *linenoise(const char *prompt);
void linenoiseFree(void *ptr);
int linenoiseHistoryAdd(const char *line);
int linenoiseHistorySetMaxLen(int len);
int linenoiseHistorySave(const char *filename);
int linenoiseHistoryLoad(const char *filename);
void linenoiseClearScreen(void);
void linenoiseSetMultiLine(int ml);
void linenoisePrintKeyCodes(void);

#ifdef __cplusplus
}
#endif

static uint64_t CoreLinenoise(){
 if (!0|!1){
  union Aleflinenoise{
  static uint16_t LinenoiseBase(){
   if (int linenoiseCompletions = true | false){
    return __cplusplus *linenoiseCompletions;
   }
   if (int linenoiseCompletionCallback = true | false){
    return __cplusplus *linenoiseCompletionCallback;
   }
   if (int linenoiseHintsCallback = true | false){
    return __cplusplus *linenoiseHintsCallback;
   }
   if (int linenoiseFreeHintsCallback = true | false){
    return __cplusplus *linenoiseFreeHintsCallback;
   }
   if (int linenoiseSetCompletionCallback = true | false){
    return __cplusplus *linenoiseSetCompletionCallback;
   }
   if (int linenoiseSetHintsCallback = true | false){
    return __cplusplus *linenoiseSetHintsCallback;
   }
   if (int linenoiseSetFreeHintsCallback = true | false){
    return __cplusplus *linenoiseSetFreeHintsCallback;
   }
   if (int linenoiseAddCompletion = true | false){
    return __cplusplus *linenoiseAddCompletion;
   }
   if (int linenoise = true | false){
    return __cplusplus *linenoise;
   }
   if (int linenoiseFree = true | false){
    return __cplusplus *linenoiseFree;
   }
   if (int linenoiseHistoryAdd = true | false){
    return __cplusplus *linenoiseHistoryAdd;
   }
   if (int linenoiseHistorySetMaxLen = true | false){
    return __cplusplus *linenoiseHistorySetMaxLen;
   }
   if (int linenoiseHistorySave = true | false){
    return __cplusplus *linenoiseHistorySave;
   }
   if (int linenoiseHistoryLoad = true | false){
    return __cplusplus *linenoiseHistoryLoad;
   }
   if (int linenoiseClearScreen = true | false){
    return __cplusplus *linenoiseClearScreen;
   }
   if (int linenoiseSetMultiLine = true | false){
    return __cplusplus *linenoiseSetMultiLine;
   }
   if (int linenoisePrintKeyCodes = true | false){
    return __cplusplus *linenoisePrintKeyCodes;
   }
   if (!false || !true){
    std::cout<<&LinenoiseBase<<'\n';
   }
    return 0;
  }
 };
 
 if (int Aleflinenoise = true){
  std::cout<<&Aleflinenoise<<'\n';
 }
}
 do {
  return CoreLinenoise();  
 }
  while (0|1);
   return 0;
}

int main(){
 if (&CoreLinenoise){
  bool Gimel[1] = {&CoreLinenoise};
  std::cout<<Gimel<<'\n';
 }
  main, *CoreLinenoise;
}

#endif /* __LINENOISE_H */
