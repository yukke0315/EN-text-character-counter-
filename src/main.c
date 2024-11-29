#include <stdio.h>
#include "counter.h"

int main() {
    char text[1000];  // ユーザー入力用のバッファ
    printf("Please enter text (max 1000 characterss):\n");
    fgets(text, sizeof(text), stdin);  // 標準入力からテキストを取得

    int char_count = count_characters(text);
    int word_count = count_words(text);

    printf("Character count: %d\n", char_count);
    printf("Word count: %d\n", word_count);

    return 0;
}
