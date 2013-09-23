/**
 * Multi-core reachability algorithm for timed automata.
 * @inproceedings{eemcs21972,
             month = {September},
            author = {A. E. {Dalsgaard} and A. W. {Laarman} and K. G. {Larsen} and M. C. {Olesen} and J. C. {van de Pol}},
         num_pages = {16},
            series = {Lecture Notes in Computer Science},
            editor = {M. {Jurdzinski} and D. {Nickovic}},
           address = {London},
         publisher = {Springer Verlag},
          location = {London, UK},
              note = {http://eprints.eemcs.utwente.nl/21972/},
         booktitle = {10th International Conference on Formal Modeling and Analysis of Timed Systems, FORMATS 2012, London, UK},
             title = {{Multi-Core Reachability for Timed Automata}},
              year = {2012}
   }
 */


#ifndef TIMED_H
#define TIMED_H

extern struct poptOption timed_options[];

typedef enum ta_update_e {
    TA_UPDATE_NONE = 0,
    TA_UPDATE_WAITING = 1,
    TA_UPDATE_PASSED = 2,
} ta_update_e_t;

extern int              LATTICE_BLOCK_SIZE;
extern int              UPDATE;
extern int              NONBLOCKING;

#endif // TIMED_H
