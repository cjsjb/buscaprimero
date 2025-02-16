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

		R1*2  |
		c' 4 ~ c' c' c'  |
		b 2 b 4 b  |
%% 5
		a 2 a 4 a  |
		g 1  |
		a 2 a 4 a  |
		g 2 g 4 g  |
		g 1  |
%% 10
		g 2 ( a 4 b )  |
		c' 4 c' c' c'  |
		b 2 b 4 ~ b  |
		a 2 a 4 a  |
		g 2 g  |
%% 15
		a 2 b 4 a  |
		g 2 a 4 g  |
		g 2. ( g 4 )  |
		g 1  |
		c' 1  |
%% 20
		b 1  |
		a 1  |
		g 1  |
		a 1  |
		g 1  |
%% 25
		g 1  |
		g 2 ( a 4 b )  |
		c' 1  |
		b 1  |
		a 1  |
%% 30
		g 1  |
		a 1  |
		g 1  |
		g 1  |
		g 1  |
	}
	\new Lyrics \lyricsto "tenor" {
		"Bus" __ "ca" "pri" -- "me" -- "ro" "el" "rei" -- "no" "de" "Dios"
		"y" "su" "jus" -- "ti" -- "cia" "di" -- "vi" -- "na," __
		"...to" -- "do" "se os" "da" -- "rá" "por" __ "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"

		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!" __
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
	 }
>>
