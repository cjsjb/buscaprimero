\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key c \major
		R1  |
		c' 4 c' 8 c' b 4 b 8 b  |
		a 4 a 8 a g 2  |
		a 4 a 8 a g 4 g 8 g  |
%% 5
		g 2 g 4 ( a 8 b )  |
		c' 8 c' c' c' b 4 b 8 ~ b  |
		a 4 a 8 a g 4 g  |
		a 4 b 8 a g 4 a 8 g  |
		g 4. ( g 8 ) g 2  |
%% 10
		R1*2  |
		c' 2 b  |
		a 2 g  |
		a 2 g  |
%% 15
		g 2 g 4 ( a 8 b )  |
		c' 2 b  |
		a 2 g  |
		a 2 g  |
		g 2 g  |
%% 20
		R1  |
		\bar "|."
	}
	\lyricsto "tenor" \new Lyrics \lyricmode {
		"Bus" -- "ca" "pri" -- "me" -- "ro" "el" "rei" -- "no" "de" "Dios"
		"y" "su" "jus" -- "ti" -- "cia" "di" -- "vi" -- "na," __
		"...to" -- "do" "se os" "da" -- "rá" "por" __ "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
		"¡A" __ "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
	 }
>>
