//chaining                                            |                          open addressing
//                                                    |
//                                                    |
//        hash table never fails                      |                     table may become full and
//                                                    |                      resizing become necessary
//                                                    |
//         less sensitive to hash functions           |           Extra care required for clustering
//                                                    |
//                                                    |
//         poor cache performance                     |           cache friendly;
//                                                    |
//                                                    |
//           extra space for links                    |                extra space might be needed to achieve
//                                                    |               same performance as chaining;
//            (1+alpha)                               |               1/(1-alpha)
//____________________________________________________|________________________________________________________
