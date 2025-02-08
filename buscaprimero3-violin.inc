\context Staff = "track-violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key c \major

		R1*2  |
		c'' 1  |
		b' 1  |
%% 5
		a' 1  |
		g' 1  |
		f' 1  |
		e' 1  |
		d' 1  |
%% 10
		d' 2. d'' 4  |
		c'' 1  |
		b' 1  |
		a' 1  |
		g' 1  |
%% 15
		f' 1  |
		e' 1  |
		d' 1  |
		c' 2 a' 4 b'  |
		c'' 2 b' 4 c''  |
%% 20
		d'' 2 b' 4 d''  |
		c'' 4 e' a' b'  |
		e'' 1  |
		c'' 2 d'' 4 c''  |
		g' 2 e' 4 f'  |
%% 25
		g' 1  |
		g' 2 a' 4 b'  |
		c'' 1  |
		d'' 2 b' 4 d''  |
		c'' 4 a' c'' d''  |
%% 30
		e'' 1  |
		c'' 2 d'' 4 c''  |
		g' 2 e' 4 f'  |
		g' 1  |
		c'' 1  |
	}
>>
