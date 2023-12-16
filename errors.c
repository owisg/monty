#include "monty.h"

void err(int error_code, ...) {
    va_list ag;
    va_start(ag, error_code);

    int a_num;
    char *op;

    switch (error_code) {
        case 1:
            fprintf(stderr, "USAGE: monty file\n");
            break;
        case 2:
            op = va_arg(ag, char *);
            fprintf(stderr, "Error: Can't open file %s\n", op);
            break;
        case 3:
            a_num = va_arg(ag, int);
            op = va_arg(ag, char *);
            fprintf(stderr, "L%d: unknown instruction %s\n", l_num, op);
            break;
        case 4:
            fprintf(stderr, "Error: malloc failed\n");
            break;
        case 5:
            a_num = va_arg(ag, int);
            fprintf(stderr, "L%d: usage: push integer\n", l_num);
            break;
        default:
            break;
    }

    va_end(ag);
    free_nodes();
    exit(EXIT_FAILURE);
}

void more_err(int error_code, ...) {
    va_list ag;
    va_start(ag, error_code);

    int a_num;
    char *op;

    switch (error_code) {
        case 6:
            a_num = va_arg(ag, int);
            fprintf(stderr, "L%d: can't pint, stack empty\n", l_num);
            break;
        case 7:
            a_num = va_arg(ag, int);
            fprintf(stderr, "L%d: can't pop an empty stack\n", l_num);
            break;
        case 8:
            a_num = va_arg(ag, unsigned int);
            op = va_arg(ag, char *);
            fprintf(stderr, "L%d: can't %s, stack too short\n", l_num, op);
            break;
        case 9:
            a_num = va_arg(ag, unsigned int);
            fprintf(stderr, "L%d: division by zero\n", l_num);
            break;
        default:
            break;
    }

    va_end(ag);
    free_nodes();
    exit(EXIT_FAILURE);
}

void string_err(int error_code, ...) {
    va_list ag;
    va_start(ag, error_code);

     a_num = va_arg(ag, int);

    switch (error_code) {
        case 10:
            fprintf(stderr, "L%d: can't pchar, value out of range\n", l_num);
            break;
        case 11:
            fprintf(stderr, "L%d: can't pchar, stack empty\n", l_num);
            break;
        default:
            break;
    }

    va_end(ag);
    free_nodes();
    exit(EXIT_FAILURE);
}

