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

                R2*2  |
                c'' 2  |
                b' 2  |
%% 5
                a' 2  |
                g' 2  |
                f' 2  |
                e' 2  |
                d' 2  |
%% 10
                d' 4. d'' 8  |
                c'' 2  |
                b' 2  |
                a' 2  |
                g' 2  |
%% 15
                f' 2  |
                e' 2  |
                d' 2  |
                c' 4 a' 8 b'  |
                c'' 4 b' 8 c''  |
%% 20
                d'' 4 b' 8 d''  |
                c'' 8 e' a' b'  |
                e'' 2  |
                c'' 4 d'' 8 c''  |
                g' 4 e' 8 f'  |
%% 25
                g' 2  |
                g' 4 a' 8 b'  |
                c'' 2  |
                d'' 4 b' 8 d''  |
                c'' 8 a' c'' d''  |
%% 30
                e'' 2  |
                c'' 4 d'' 8 c''  |
                g' 4 e' 8 f'  |
                g' 2  |
                c'' 2  |
		\bar "|."
	}
>>
