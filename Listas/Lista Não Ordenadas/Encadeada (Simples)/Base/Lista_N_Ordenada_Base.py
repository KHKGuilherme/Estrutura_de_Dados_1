"""
---------------------------------------------------------------
Lista Encadeada Não Ordenada -- BASE
---------------------------------------------------------------
"""
class List:
    
    # Inicialização da lista
    def __init__(self):
        self.items = []

    # Verificar se a lista está vazia
    def verificaVazia(self):

        return self.items == []

        #Alternativo
        #return self.tamanhoLista() == 0

    # Insere um elemento
    def inserirLista(self, item):
        self.items.append(item)

    # Remova um elemento especifico
    def removeListaEspecifico(self,item):
        return self.items.remove(item)

    # Remova o primeiro elemento
    def removeListaPrimeiro(self):
        return self.items.remove(self.items[0])
        
    # Remova o ultimo elemento
    def removeListaUltimo(self):
        return self.items.pop()


    # Checa o final da lista
    def finalLista(self):
        return self.items[len(self.items)-1]

    # Checa o inicio da lista
    def inicioLista(self):
        return self.items[0]

    # Verifica tamanho da lista
    def tamanhoLista(self):
        return len(self.items)

    # Zerar a Lista
    def zerarLista(self):
        while not self.verificaVazia():
            self.removeListaUltimo()

    # Imprime lista
    def __str__(self):
        return str(self.items)

#------------------------------------------------