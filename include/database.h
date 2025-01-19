#ifndef DATABASE_H
#define DATABASE_H

typedef struct Line {
    int id;
    char data[256];
    struct Line *next;
} Line;

typedef struct Table {
    char name[50];
    Line *head;
} Table;

void insert_line(Table *table, int id, const char *data);
void select_lines(const Table *table);

#endif
