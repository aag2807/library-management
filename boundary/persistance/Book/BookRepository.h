#ifndef BOOKREPOSITORY_H
#define BOOKREPOSITORY_H
#include "../BaseRepository.h"
#include "../../../core/Book/Book.h"


class BookRepository : public BaseRepository<Book>
{
public:
    BookRepository() : BaseRepository<Book>()
    {
    };
};


#endif //BOOKREPOSITORY_H
