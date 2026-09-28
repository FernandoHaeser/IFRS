04 Feed da rede social

Uma rede social mostra no feed três formatos de publicação, e toda publicação é de um desses formatos. Todas têm autor, curtidas e comentários, e todas exibem uma prévia e um índice de engajamento, mas cada formato calcula e exibe essas duas coisas do seu jeito. O post de texto mostra o próprio texto entre aspas, e seu engajamento é o número de curtidas somado ao dobro dos comentários. A foto mostra a legenda precedida de [foto], e soma a esse mesmo cálculo o triplo dos compartilhamentos. O vídeo mostra o título precedido da duração em minutos e segundos, como [video 2min05s], a partir da duração em segundos, e soma ao mesmo cálculo um ponto a cada dez visualizações completas. A equipe já anunciou que vai lançar enquetes em breve, e quem mantém o feed não quer ter que alterar o código dele quando isso acontecer.

O que sua solução precisa ter

Uma forma de representar os três formatos em que a parte comum (autor, curtidas, comentários e a conta de curtidas mais o dobro dos comentários) seja escrita uma vez só.
Uma classe para o feed, que guarda as publicações em um vetor, permite publicar uma nova, exibe todas na ordem em que foram publicadas (autor, prévia e engajamento) e informa qual publicação tem o maior engajamento.
Em nenhum lugar do feed aparece o nome de um formato específico de publicação.
No main, publique pelo menos quatro publicações, com os três formatos representados, exiba o feed e depois a publicação de maior engajamento.