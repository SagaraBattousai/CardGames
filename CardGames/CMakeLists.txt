
set(srcFiles card.cpp deckFactory.cpp)
set(headerFiles ../include/CardGames/card.h ../include/CardGames/deck.h ../include/CardGames/deckFactory.h)


add_library(CardGames SHARED ${srcFiles} ${headerFiles})
target_include_directories(CardGames PUBLIC ../include/CardGames/)
target_compile_definitions(CardGames PRIVATE EXPORT_CARDGAME)


if(${CMAKE_VERSION} VERSION_GREATER 3.8)
	source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} PREFIX "src" FILES ${srcFiles})
	source_group(TREE ${CMAKE_SOURCE_DIR}/include/CardGames PREFIX "headers" FILES ${headerFiles})  
endif()


