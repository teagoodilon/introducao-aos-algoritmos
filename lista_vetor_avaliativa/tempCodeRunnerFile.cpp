int busca_binaria(int vetor[], int numero_procurado, int inicio, int fim){
    
    int meio = (inicio+fim)/2;
    if(inicio <= fim){
        if (vetor[meio] == numero_procurado ){ //achou
        return meio;
    }
    if (vetor[meio] < numero_procurado){
        return busca_binaria(vetor, numero_procurado, meio + 1, fim);
        } else {
            return busca_binaria(vetor, numero_procurado, inicio, meio - 1);        
        }  
    } else {
        return -1;
    }
}