#ifndef BASEREPOSITORY_H
#define BASEREPOSITORY_H
#include <string>

template<class T>
class BaseRepository
{
public:
    virtual ~BaseRepository() = default;

private:

protected:
    virtual void Add(T entity) = 0;

    virtual void Update(T entity) = 0;

    virtual void Delete(T entity) = 0;

    virtual T GetById(int id) = 0;

    virtual T GetAll() = 0;

    virtual T GetByQuery(std::string query) = 0;
};


#endif //BASEREPOSITORY_H
