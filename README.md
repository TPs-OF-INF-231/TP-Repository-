# TP-Repository-Rapport d'exercices en C
Ce rapport récapitule les concepts et les méthodes de résolution des exercices de programmation en C, fournis par le Professeur Metatagia pour le cours INF 231_EC2: Structure de données II. Chaque section présente une explication concise de l'approche sans inclure le code source.
1. Somme de matrices
Pour additionner deux matrices, une vérification initiale des dimensions est nécessaire : elles doivent être identiques. La somme s'effectue ensuite en parcourant chaque élément des deux matrices, et en additionnant les éléments de même position pour les stocker dans une troisième matrice.
2. Produit de matrices
Le produit matriciel est une opération plus complexe qui s'applique entre une matrice \bm{A} de dimensions \bm{m \times n} et une matrice \bm{B} de dimensions \bm{n \times p}. La matrice résultante \bm{C} aura des dimensions \bm{m \times p}. Chaque élément \bm{C_{ij}} est le résultat de la somme des produits des éléments de la \bm{i}-ième ligne de la première matrice par les éléments de la \bm{j}-ième colonne de la seconde.
3. Recherche séquentielle dans un tableau
La recherche séquentielle est une méthode simple pour trouver une valeur dans un tableau. Elle consiste à parcourir chaque élément du tableau l'un après l'autre, du début à la fin, pour vérifier s'il correspond à la valeur recherchée. Si la valeur est trouvée, l'indice de l'élément est retourné ; sinon, une valeur spéciale (comme -1) est renvoyée pour indiquer l'absence de la valeur.
4. a × b pour a, b > 0 utiliser exclusivement +1
Cet exercice illustre le principe fondamental de la multiplication comme une série d'additions répétées. Pour calculer le produit de a et b, on initialise une variable à zéro et on y ajoute la valeur de a, b fois. L'utilisation exclusive de l'opération d'incrémentation (+1) implique de répéter l'addition a fois, pour un total de b itérations.
5. Tester si un tableau est trié
Pour déterminer si un tableau est trié par ordre croissant, il suffit de le parcourir à partir du deuxième élément et de comparer chaque élément avec son prédécesseur immédiat. Si à un moment donné un élément est inférieur au précédent, le tableau n'est pas trié. Si la boucle se termine sans qu'une telle condition ne soit rencontrée, le tableau est considéré comme trié.
6. Le médian dans un tableau
Le médian est la valeur qui se trouve au milieu d'un tableau après qu'il a été trié. Pour trouver le médian, la première étape indispensable est de trier le tableau. Si le nombre d'éléments est impair, le médian est l'élément qui se trouve exactement au milieu. Si le nombre d'éléments est pair, le médian est la moyenne des deux éléments du milieu.
7. Inverser un tableau
L'inversion d'un tableau peut être réalisée en échangeant ses éléments de manière symétrique. Une méthode courante utilise deux pointeurs : l'un au début et l'autre à la fin du tableau. On échange les valeurs pointées par ces deux indices, puis on les déplace vers le centre du tableau jusqu'à ce qu'ils se rencontrent ou se croisent.
8. Produit vectoriel
Le produit vectoriel est une opération mathématique entre deux vecteurs de dimension 3 qui donne un troisième vecteur. Ce nouveau vecteur est perpendiculaire aux deux vecteurs d'origine. La direction et le sens du vecteur résultant sont déterminés par la règle de la main droite. Le calcul de chaque composante du nouveau vecteur suit des formules précises basées sur les composantes des vecteurs initiaux.
9. Produit vecteur × matrices
Le produit d'un vecteur-ligne par une matrice est une opération qui génère un nouveau vecteur-ligne. Pour que cette opération soit possible, le nombre de colonnes du vecteur doit être égal au nombre de lignes de la matrice. Chaque composante du vecteur résultant est la somme des produits des composantes du vecteur de départ par les composantes de la colonne correspondante de la matrice.
