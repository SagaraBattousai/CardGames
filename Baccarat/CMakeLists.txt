
# set(srcFiles card.cpp deck.cpp)
# set(headerFiles ../include/Baccarat/card.h ../include/Baccarat/deck.h)


#add_library(Baccarat STATIC ${srcFiles} ${headerFiles})
#target_include_directories(Baccarat PUBLIC ../include/Baccarat/)


#if(${CMAKE_VERSION} VERSION_GREATER 3.8)
#	source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} PREFIX "src" FILES ${srcFiles})
#	source_group(TREE ${CMAKE_SOURCE_DIR}/include/Baccarat PREFIX "headers" FILES ${headerFiles})  
#endif()


