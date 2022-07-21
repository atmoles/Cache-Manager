#include<iostream>
#include<fstream>
#include<map>
#include<utility>
#include<string>

using namespace std;

template < class T >
class CacheManager {
// members ( private )
    int capacity ;
    map<string , pair<T , int >> cache_data ; // <Clave , <Obj , Indice de Uso > >

    bool write_file (string,T) ;

public:

    CacheManager(int) ; // recibe la capacidad en el int
    ~CacheManager() ;

    void insert(string key,T obj);
    T get (string key);

    // Agregar todas las funciones necesarias
    bool existKey(string key){
        for(auto x: cache_data){
            if(key == cache_data.first)
                return true;
            else
                return false;
        }
    }

};

template <class T>
CacheManager <T> :: CacheManager (int cap) {
    capacity = cap ;
}

template <class T>
CacheManager <T> :: ~CacheManager () {}

template <class T>
bool CacheManager <T> :: write_file (string key , T obj) {
    fstream file("archivo.txt", ios::in | ios::out);
    if(!file){
        cerr << "Error al abrir el archivo" << endl;
        exit(1);
    }
    file << key << " " << obj << obj.getValue();
    file.close();
    return true;
}

// INSERT
template < class T >
void CacheManager <T >:: insert ( string key , T obj ) {
    if(cache_data.empty()){
        cache_data.insert
    }
}


template <class T>
T CacheManager <T> :: get(string key) {
    if(!existKey(key)){
        cout << "Clave invalida" << endl;
    }

    cache_data.at(key).second = cache_data.at(key)
}
