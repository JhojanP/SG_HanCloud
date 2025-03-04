#include <cstdio>
struct Player
{ 
    char app {'P'}; 
};
struct Enemy
{
     char app {'E'}; 
};

struct Bomb
{
    char app {'O'};
};

struct Explosion
{
    char app {'O'};
    char matriz[3][3] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'},
        {'G', 'H', 'I'}
    };
};

template <typename Type> 
void draw(Type const & type){ 
    std::printf("%c\n",type.app);
}

int main(){ 
    Player p;  
    Enemy e; 
    Bomb b; 
    Explosion ex; 

    draw(p); 
    draw(e); 
    draw(b); 
    draw(ex); 
}
