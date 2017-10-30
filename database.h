#ifndef DATABASE_H_
#define DATABASE_H_
#ifndef HEADER_H_
#include "header.h"
#endif
struct issue {
	int value;
};
struct database {
	struct issue *value;
	int size;
};
void database_init(struct database db, int size) { /* Initialize Database */
	db->value = (struct issue *) malloc(size * sizeof(struct issue));
	db->size = size;
}
struct issue *database_issue(struct database db, int id) {
	return (struct issue *) (db->value + id); 
}
#endif