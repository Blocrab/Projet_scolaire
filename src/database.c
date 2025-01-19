#include "database.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert_line(Table *table, int id, const char *data) {
    Line *new_line = malloc(sizeof(Line));
    new_line->id = id;
    strncpy(new_line->data, data, 255);
    new_line->data[255] = '\0';
    new_line->next = table->head;
    table->head = new_line;
}

void select_lines(const Table *table) {
    Line *current = table->head;
    while (current) {
        printf("ID: %d, Data: %s\n", current->id, current->data);
        current = current->next;
    }
}
