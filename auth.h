// gtklock
// Copyright (c) 2022 Jovan Lanik

// PAM Authentication

#include <glib.h>

void *auth_start(void);
void auth_end(void *handle);
gboolean auth_pwcheck(const char *s, void *handle);
