float CadenaMin(Nodo* inicio,int cantidad){
    float porcentaje;
    int CantidadTotal=0;
    int CantidadCadenas=0;
    while(inicio!=nullptr){
        if(inicio->cadena.lenght()>=cantidad){
            CantidadCadenas++;
        }
        CantidadTotal++;
        inici=inicio->siguiente;
    }
    porcentaje=CantidadCadenas*100/CantidadTotal;
    cout<<porcentaje<<"%";
    return porcentaje;
}