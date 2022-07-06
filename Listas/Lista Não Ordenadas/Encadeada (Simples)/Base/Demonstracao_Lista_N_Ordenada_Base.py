from Lista_N_Ordenada_Base import *

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