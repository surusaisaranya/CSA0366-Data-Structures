#include <stdio.h>
#include <string.h>

int haystackSearch(const char *haystack, const char *needle) {
    int haystackLen = strlen(haystack);
    int needleLen = strlen(needle);

    for (int i = 0; i <= haystackLen - needleLen; i++) {
        int j;
        for (j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (j == needleLen)
            return i; // Found needle at position i
    }
    return -1; // Needle not found
}

int main() {
    const char *haystack = "Hello, this is a simple example.";
    const char *needle = "simple";

    int result = haystackSearch(haystack, needle);

    if (result != -1) {
        printf("Needle found at position: %d\n", result);
    } else {
        printf("Needle not found.\n");
    }

    return 0;
}

