#pragma once
#ifndef _UTILS_H_
#define _UTILS_H_

char *rowsToString(int *buflen);
void setStatusMessage(const char *fmt, ...);
char *getPrompt(char *promt, void (*callback)(char *, int));
char *rtrim(char *s);
char *token(char *command);

#endif
