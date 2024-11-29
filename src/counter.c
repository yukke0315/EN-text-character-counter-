#include "counter.h"
#include <ctype.h>

// Function to count characters
int count_characters(const char *text) {
    int count = 0;
    while (*text++) {
        count++;
    }
    return count;
}

// Function to count words
int count_words(const char *text) {
    int count = 0;
    int in_word = 0;

    while (*text) {
        if (isspace(*text)) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
        text++;
    }

    return count;
}
