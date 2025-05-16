/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:03:34 by itahri            #+#    #+#             */
/*   Updated: 2025/05/16 19:50:26 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"
#include <algorithm>


 int Jacobsthal(int n)
{
    // base case
    if (n == 0)
        return 0;
 
    // base case
    if (n == 1)
        return 1;
 
    // recursive step
    return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2);
}

JhonsonVec::JhonsonVec(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    if (std::find(_arg.begin(), _arg.end(), atoi(argv[i])) != _arg.end()) {
      throw std::invalid_argument("Found two time the same element");
    }
    _arg.push_back(atoi(argv[i]));
  }

  for (size_t i = 0; i < _arg.size(); i++) {
    std::cout << _arg[i];
  }
  std::cout << std::endl;

  std::vector<int> oui = make_pairs(_arg);
  std::cout << "SORT : ";
  for (size_t i = 0; i < oui.size(); i++) {
    std::cout << oui[i] << " ";
  }
  std::cout << std::endl;
}

std::vector<int> JhonsonVec::make_pairs(std::vector<int> tab) {
  std::vector<int>::iterator it = tab.begin();
  std::vector<int> big;
  std::vector<int> small;
  std::vector<int> result;

  while (it != tab.end()) {
    int current = *it;
    ++it;

    if (it != tab.end()) {
      big.push_back(std::max(current, *it));
      small.push_back(std::min(current, *it));
      std::cout << "[" << current << ", " << *it << "]" << std::endl;
      it++;
    } else {
      small.push_back(current);
    }
  }
  std::cout << "-----------------------" << std::endl;
  if (small.size() == 1)
    return (small.push_back(big[0]), small);
  result = make_pairs(big);

  int last_j = 0;
  int jmax = 0;
  // inserer les small dans result avec jacob
  for (size_t i = 0; i <= small.size(); i++) {
    // std::vector<int>::const_iterator pos = small.begin() + Jacobsthal(i);
    jmax = Jacobsthal(i);
    if (jmax < (int)small.size()) {
      for (int j = last_j; j < jmax; j++) {
        result.insert(std::lower_bound(result.begin(), result.end(), small[j]), small[j]);
      }
      last_j = jmax;
    }
    else
    {
      for (size_t j = last_j; j < small.size(); j++) {
        result.insert(std::lower_bound(result.begin(), result.end(), small[j]), small[j]);
      }
      break;
    }
  }

  // ajouter le reste de small dans le cas ou le dernier indice de jacob n'est pas supperieur a small.size
  if (jmax < (int)small.size()) {
    for (size_t j = jmax; j < small.size(); ++j) {
      result.insert(std::lower_bound(result.begin(), result.end(), small[j]), small[j]);
    }
  }

  return result;
}

int max(int a, int b) {
  return a > b ? a : b;
}

int min(int a, int b) {
  return a < b ? a : b;
}


/* DEQUEU IMPLEMENTATION */


JhonsonQueue::JhonsonQueue(int argc, char *argv[]) {
for (int i = 1; i < argc; i++) {
    if (std::find(_arg.begin(), _arg.end(), atoi(argv[i])) != _arg.end()) {
      throw std::invalid_argument("Found two time the same element");
    }
    _arg.push_back(atoi(argv[i]));

    for (size_t i = 0; i < _arg.size(); i++) {
      std::cout << _arg[i];
    }
    std::cout << std::endl;

    std::deque<int> oui = make_pairs(_arg);
  }
}

std::deque<int> JhonsonQueue::make_pairs(std::deque<int> tab) {
  std::deque<int>::iterator it = tab.begin();
  std::deque<int> big;
  std::deque<int> small;
  std::deque<int> result;

  while (it != tab.end()) {
    int current = *it; // element actuel
    ++it; // element suivant (sert a forme la paire)
    
    if (it != tab.end()) {
      // on ajoute le plus grand element dans la queue big
      big.push_back(std::max(current, *it)); 
      // et le plus petit dans small -_-
      small.push_back(std::min(current, *it));
      std::cout << "[" << current << ", " << *it << "]" << std::endl;
      it++;
    } else {
      // si il ne reste qu'un seul element et qu'on ne peux pas former de pairs on le met dans small
      small.push_back(current);
    }
  }
  std::cout << "-----------------------" << std::endl;
  if (small.size() == 1)
    return(small.push_back(big[0]), small);
  result = make_pairs(big);

  // quand on as fini de faire les pairs recursivement on peux commencer l'insertion
  
  int last_j = 0; // dernier indice de la suite a avoir ete utiliser
  int jmax = 0;

  for (size_t i = 0; i <= small.size(); i++) {
    jmax = Jacobsthal(i);
    if (jmax < (int)small.size()) {
      // si l'indice actuel de jacob n'est pas plus grand que la taille de small
      // on insert tout les element a partir du dernier indice jusqu'au nouveau
      for (int j = last_j; j < jmax; j++) {
        // on trouve la position adequate pour chaque element grace a la fonction lower_bound
        // si result = {2, 4, 9} et que je veux y inserer 5 lower_bound va me renvoyer l'itertor sur 4 pour inserer juste derriere
        result.insert(std::lower_bound(result.begin(), result.end(), small[j]), small[j]);
      }
      last_j = jmax;
    } else {
      // si l'indice depasse la taille on applique la meme logique mais jusq'a small.size()
      for (size_t j = jmax; j < small.size(); ++j) {
        result.insert(std::lower_bound(result.begin(), result.end(), small[j]), small[j]);
      }
      break;
    }
  }

  // on ajoute le reste de small dans le cas ou le dernier indice de jacob n'est pas supperieur a small.size
  if (jmax < (int)small.size()) {
    for (size_t j = jmax; j < small.size(); j++) {
      result.insert(std::lower_bound(result.begin(), result.end(), small[j]), small[j]);
    }
  }
  return result;
}
