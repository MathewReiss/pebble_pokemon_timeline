/*
Pokemon: Cobalt Blue and Pokemon: Windsor Tan

Choose a Starter: Squirtle (4, 16, 40), Bulbasaur (4, 16, 40), Charmander (4, 16, 40), or Pikachu (4, 32-Thunderstone)

Watchapp: View Pokemon stats, badge progress, trainer score (factor of Pokemon level, # of badges, # of Pokemon caught)

Minor Events (PebbleKit JS): Random wild battles, Trainer challenges
-Actions: "Squirtle (4/16)", "Battle", "Catch" (Wild only), "Run Away" (Wild only), "Forfeit (-$)" (Trainer only)

Major Events (Web App): Gym Leader Challenges, Special Events
-Actions: "Squirtle (4/16)", "Battle" (Gym Leader only), "Catch" (Special Events only)

Game Mechanics
-Pokemon automatically heal at midnight
-Level cap of 50
-If your Pokemon faints, lose 50% $
-Experience "Groups": Based on game progress ("town" = level, # of badges)
-Group determines Timeline Channel, for filtering certain events
-"Battle" determines Win/Loss, EXP gain, $ gain (Trainer only), Badge gain (Gym Leader only)
-"Catch" determines Catch/Fail, Pokedex gain (Wild only)
-"Run Away" has 100% success rate, dismisses notification
-"Forfeit" has 100% success rate, but user loses 10% $
-"Pokemon Name (Current HP/Max HP)" does nothing [Is this possible?]
-

Levels
-Pallet Town (Special Event: All Day - Meet w/ Professor Oak)
-Viridian City (Special Event: Between Noon and Midnight - Battle Rival)
-Pewter City (Gym Leader: All Day - Brock)
-Mt Moon (Special Event: Eight PM to Eight AM - Fight Clefable)
-Cerulean City (Gym Leader: All Day - Misty)
-Vermillion City (Gym Leader: All Day - Lt Surge)
-SS Anne (Special Event: Between Midnight and Noon - Battle Rival)
-Rock Tunnel (Special Event: Catch Onyx + Geodude)
-Celadon City (Gym Leader: All Day - Erika)
-Rocket Hideout (Special Event: All Day - Giovanni)
-Lavender Town (Special Event: Eight PM to Eight AM - Fight Marowak)
-Saffron City (Gym Leader: All Day - Sabrina)
-Cycling Road (Special Event: Eight AM to Eight PM - Biker Boss)
-Fuschia City (Gyn Leader: Eight PM to Eight AM - Koga)
-Safari Zone (Special Event: Nine AM to Five PM - Find Wardens Teeth)
-Surfing Adventure (Special Event: Catch Lapras)
-Cinnabar Island (Gym Leader: Noon to Three PM - Blane)
-Pallet Town 2 (Special Event: All Day - Prof Oak Pokedex Check)
-Viridian City 2 (Gym Leader: Eight PM to Eight AM - Giovanni)
-Victory Road (Special Event: Midnight to Noon - Battle Rival)
-
*/