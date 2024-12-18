#include <stdio.h>
#include "instrumenting.h"

void add_false_branch(const char* var_name, int curr, int prev) {
    FILE *log_file = fopen("/home/ubuntu/experiments/branch.log", "a");
    if (!log_file) {
        fprintf(stderr, "Error opening log file\n");
        return;
    }

    if (prev == curr) {
        fprintf(log_file, "Branch not taken: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

    // Branch conditions
    if (prev == 0 && curr == 1) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 0 && curr == 2) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 0 && curr == 3) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 0 && curr == 4) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 0 && curr == 5) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 0 && curr == 6) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 0 && curr == 7) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 0 && curr == 8) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

    if (prev == 1 && curr == 0) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 1 && curr == 2) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 1 && curr == 3) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 1 && curr == 4) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 1 && curr == 5) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 1 && curr == 6) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 1 && curr == 7) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 1 && curr == 8) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

    if (prev == 2 && curr == 0) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 2 && curr == 1) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 2 && curr == 3) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 2 && curr == 4) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 2 && curr == 5) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 2 && curr == 6) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 2 && curr == 7) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 2 && curr == 8) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

	    if (prev == 3 && curr == 0) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 3 && curr == 1) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 3 && curr == 2) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 3 && curr == 4) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 3 && curr == 5) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 3 && curr == 6) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 3 && curr == 7) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 3 && curr == 8) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

    if (prev == 4 && curr == 0) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 4 && curr == 1) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 4 && curr == 2) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 4 && curr == 3) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 4 && curr == 5) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 4 && curr == 6) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 4 && curr == 7) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 4 && curr == 8) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

	    if (prev == 5 && curr == 0) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 5 && curr == 1) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 5 && curr == 2) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 5 && curr == 3) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 5 && curr == 4) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 5 && curr == 6) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 5 && curr == 7) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 5 && curr == 8) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

    if (prev == 6 && curr == 0) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 6 && curr == 1) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 6 && curr == 2) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 6 && curr == 3) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 6 && curr == 4) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 6 && curr == 5) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 6 && curr == 7) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 6 && curr == 8) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

	    if (prev == 7 && curr == 0) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 7 && curr == 1) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 7 && curr == 2) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 7 && curr == 3) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 7 && curr == 4) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 7 && curr == 5) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 7 && curr == 6) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 7 && curr == 8) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

    if (prev == 8 && curr == 0) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 8 && curr == 1) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 8 && curr == 2) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 8 && curr == 3) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 8 && curr == 4) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 8 && curr == 5) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 8 && curr == 6) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }
    if (prev == 8 && curr == 7) {
        fprintf(log_file, "Reached branch: var_name=%s, curr=%d, prev=%d\n", var_name, curr, prev);
        fclose(log_file);
        return;
    }

    fclose(log_file);
}

