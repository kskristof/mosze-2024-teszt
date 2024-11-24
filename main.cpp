#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    //új változó a program végén nem kerül törlésre, és a konstans nevéből hiányzik az aláhúzás
    std::cout << '1-100 ertekek duplazasa'    //nem megfelelő idézőjel használata, hiányzó pontos vessző
    for (int i = 0;)    //ciklus vége és lépésköze nincsenek megadva
    {
        b[i] = i * 2;    //az i helyett i+1 számot kell megszorozni 2-vel a helyes működés érdekében
    }
    for (int i = 0; i; i++)    //itt is hiányzik a ciklus vége
    {
        std::cout << "Ertek:"    //így még nem írja ki az értékeket, illetve célszerű valamennyit helyet hagyni a kiiratások között, és itt sincs pontos vessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;    //egy sortörést érdemes beszúrni az előző felsorolás után
    int atlag;    //ennek a változónak nincs kezdőértéke
    for (int i = 0; i < N_ELEMENTS, i++)    //vessző helyett pontos vesszőt kell itt használni a lépésköz előtt
    {
        atlag += b[i]    //nincs pontos vessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;    //a 7. sorban említett változót ezután érdemes törölni
    return 0;
}
