export enum JUICER_ACTIONS {
  ON_JUICER = 'JUICER_ACTIONS.ON_JUICER',
  OFF_JUICER = 'JUICER_ACTIONS.OFF_JUICER'
}

type onJuicer = {
  type: typeof JUICER_ACTIONS.ON_JUICER
}

type offJuicer = {
  type: typeof JUICER_ACTIONS.OFF_JUICER
}

export type ActionTypes =
  | onJuicer
  | offJuicer