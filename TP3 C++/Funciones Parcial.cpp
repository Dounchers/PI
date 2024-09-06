//CARGAR ARREGLO
struct Nodo{
    int dato;
    Nodo* siguiente;
};
int num;
Nodo* inicio=nullptr;
cout<<"Ingrese numero: ";
cin>>num;
while(num!=0){
    Nodo* nuevo; //Creo un puntero del tipo Nodo llamado nuevo
    nuevo=new Nodo; //nuevo ahora apunta a un new Nodo que se creó en la heap
    nuevo->dato=num; //Accedo al dato del nodo y le doy un valor
    nuevo->siguiente=nullptr; //accedo al puntero del nodo y le asigno null ptr POR EL MOMENTO EL NODO ESTÁ AISLADO
    inicio=ingresarInicio(inicio,nuevo); //lo necesito para avanzar, mi inicio ahora será lo que me retorne la funcion (el nuevo nodo insertado al inicio)
    cout<<"Ingrese otro numero: ";
    cin>>num;
}
//----------------------------------------------------------------------

Nodo* InsertarInicio(Nodo* inicio, Nodo* nuevo){ //RECIBE EL PUNTERO DEL INICIO DEL ARRAY Y EL PUNTERO DEL NUEVO NODO
    nuevo->siguiente=inicio; //el PUNTERO que contiene el NUEVO NODO, ahora apuntara al PUNTERO INICIO que apunta a su vez a nullptr
    return nuevo; //retorno NUEVO que será el PRIMER NODO, es decir mi inicio. Y el inicio anterior seguirá apuntando a nullptr
}
//------------------------------------------------------------------------------------------------------------------------------------------
Nodo* ingresarFinal(Nodo* inicio, Nodo* nuevo){
    if(inicio==nullptr){
        inicio=nuevo;
    }
    else{
        Nodo* aux=inicio;
        while(aux->siguiente!=nullptr){
            aux=aux->siguiente;
        }
        aux->siguiente=nuevo;
        nuevo->siguiente=nullptr;
    }
    return aux;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
void ImprimirLista(Nodo * inicio){
    Nodo * aux=inicio;
    while(aux!=nullptr){
        cout<<aux->dato<<" ";
        aux=aux->siguiente;
    }
}

//-------------------------------------------------------------------------
bool SeEncuentra(Nodo* inicio,int DatoAbuscar){ 
    for(Nodo* aux=inicio;aux!=nullptr;aux=aux->siguiente){ //RECORRO EL ARREGLO
        if(DatoAbuscar==aux->dato){
            return true;
        }
    }
    return false;
}
//-------------------------------------------------------------------------------------------------------------------------
Nodo* EliminarDato(Nodo* inicio, string nombreEliminar) {
    if (inicio != nullptr) {
        Nodo *aux = inicio; // Declarar aux en este ámbito

        if (inicio->nombre == nombreEliminar) {
            inicio = inicio->siguiente;
            delete aux;
        } else {
            while ((aux->siguiente != nullptr) && (aux->siguiente->nombre != nombreEliminar)) {
                aux = aux->siguiente;
            }
            if (aux->siguiente != nullptr && aux->siguiente->nombre == nombreEliminar) {
                Nodo* aEliminar = aux->siguiente;
                aux->siguiente = aEliminar->siguiente;
                delete aEliminar;
            }
        }
    }
    return inicio;
}