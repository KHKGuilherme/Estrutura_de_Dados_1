"""
---------------------------------------------------------------
Lista Encadeada Não Ordenada
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

print('Iniciando Demonstração!\n')
lista = List()
lista.inserirLista(33)
lista.inserirLista(10)
lista.inserirLista(7)
lista.inserirLista(15)
lista.inserirLista(14)
lista.inserirLista(3)
lista.inserirLista(4)

print('Demonstrando Exibir:')
print('Lista Completa: ',lista)
if lista.verificaVazia():
    print('Está Vazia')
print('Inicio: ',lista.inicioLista())
print('Final: ',lista.finalLista())
print('Tamanho: ',lista.tamanhoLista())

print('\nDemonstrando Remoção:')
print('Remove o inicio...')
lista.removeListaPrimeiro()
print('Lista Completa: ',lista)
print('Remove o final...')
lista.removeListaUltimo()
print('Lista Completa: ',lista)
print('Remove o 15...')
lista.removeListaEspecifico(15)
print('Lista Completa: ',lista)
print('Tamanho: ',lista.tamanhoLista())

print('\nDemonstração Zerar Lista:')
print('Esvazie a Lista...')
lista.zerarLista()
if lista.verificaVazia():
    print('A lista está Vazia')

print('Lista Completa: ',lista)

print('\nFinalizando...')